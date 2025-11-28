
This problem resembles a **binary decision tree**, where for each element we either:

1. **Include it** into the current subset  
2. **Exclude it**

However, the twist is that the input can contain **duplicate values** (e.g., `[1,2,2]`).  
If we blindly apply include/exclude choices, we will generate duplicate subsets.

To prevent this, we apply a simple but powerful technique:

### 🎯 Core Idea (Deep Learning Analogy)
Think of the array as a sequence of “tokens.”  
To avoid learning redundant patterns, we normalize the input (sort it),  
then for each repeated token, we let the model process it **only once** during exclusion.

This gives us:
- **Clean**, non-redundant training paths  
- **Unique**, non-redundant subsets

Sorting puts duplicates next to each other.  
Skipping duplicates ensures the exclusion path explores each group of duplicates only once.

---

# 🔧 Why Each Variable Exists

### `vector<int>& nums`
- The original array.
- Sorted inside the recursion so duplicate elements sit next to each other.
- Needed for both inclusion and checking duplicates during exclusion.

### `vector<int> Current`
- Tracks the **current subset** being built.
- Acts like a recursive call-stack buffer.
- Grows when including elements; shrinks (backtracking) after returning.

### `int i`
- The **current index** in `nums`.
- Represents the "decision point" in the recursion tree.
- When `i == nums.size()`, the subset is complete.

### `vector<vector<int>>& TotalSubset`
- Stores **all final unique subsets**.
- Filled only when we reach the base case.
- Passed by reference so recursion updates a single shared structure.

### `int next`
- Temporary pointer used to **skip all consecutive duplicates**.
- Ensures exclusion branch is processed only once for each group of duplicates.


# Code
```cpp []
class Solution {
public:

    void Generate(vector<int>&nums, vector<int>Current, int i , vector<vector<int>>&TotalSubset){
        sort(nums.begin(), nums.end()); // as we have used next to store next index, so it must be sorted to work 

        // Base condition
        if(i == nums.size()){
            TotalSubset.push_back(Current);
            return;
        }

        // inclusion case {Include nums[i]}
        Current.push_back(nums[i]);
        Generate(nums, Current, i+1, TotalSubset);

        // BackTracking 
        Current.pop_back();

        // Skipping the duplicate element
        int next = i+1;
        while(next < nums.size() && nums[next] == nums[i]){ //if next element is same as prev element, Skip it.
            next++;
        }

        // exclusion
        Generate(nums, Current, next, TotalSubset );
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> TotalSubsets; //store the final result
        vector<int> Current;
        Generate(nums, Current, 0, TotalSubsets);
        return TotalSubsets;
    }
};
```


Example : 

# 🧪 [1,2,2] FULL DRY RUN (Step-by-Step)

````md
------------------------------------------------------------
Call 1:
Generate(nums, Current = [], i = 0)
nums[0] = 1

Include nums[0]:
Current = [1]
Generate(nums, [1], i = 1)


------------------------------------------------------------
Call 2:
nums[1] = 2

Include nums[1]:
Current = [1,2]
Generate(nums, [1,2], i = 2)


------------------------------------------------------------
Call 3:
nums[2] = 2

Include nums[2]:
Current = [1,2,2]
Generate(nums, [1,2,2], i = 3)

Base Case → Add:
[1, 2, 2]


Backtrack:
Current = [1, 2]

Exclude nums[2] (skip duplicates):
next = 3
Generate(nums, [1,2], i = 3)

Base Case → Add:
[1, 2]


Backtrack to Call 2:
Current = [1]

Exclude nums[1] (skip both 2's):
next = 3
Generate(nums, [1], i = 3)

Base Case → Add:
[1]


Backtrack to Call 1:
Current = []


------------------------------------------------------------
Exclude nums[0]:
next = 1
Generate(nums, [], i = 1)


------------------------------------------------------------
Call 4:
nums[1] = 2

Include nums[1]:
Current = [2]
Generate(nums, [2], i = 2)


------------------------------------------------------------
Call 5:
nums[2] = 2

Include nums[2]:
Current = [2, 2]
Generate(nums, [2,2], i = 3)

Base Case → Add:
[2, 2]


Backtrack:
Current = [2]

Exclude nums[2]:
next = 3
Generate(nums, [2], i = 3)

Base Case → Add:
[2]


Backtrack to root:
Current = []


------------------------------------------------------------
Exclude nums[1] and nums[2] (duplicate group):
next = 3
Generate(nums, [], i = 3)

Base Case → Add:
[]


------------------------------------------------------------
Final Unique Subsets Produced:
[
  [],
  [1],
  [2],
  [1, 2],
  [2, 2],
  [1, 2, 2]
]qqqqq
