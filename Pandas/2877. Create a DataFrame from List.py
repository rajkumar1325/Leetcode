import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    column = ["student_id", "age"] #column titles
    ans = pd.DataFrame(student_data, columns = column)

    return ans


'''
create a column and add it to the original data as column
'''
