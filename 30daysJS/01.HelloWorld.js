/**
 * @return {Function} //Comment -->this function returns another function
 */
var createHelloWorld = function() {
    return function(...args) {
        return("Hello World");
    }
};

// That means when you call createHelloWorld(), it gives you a new function — not a string or number, but a function.
// (...args) means:  “Collect all arguments passed to this function into an array called args.”


/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
