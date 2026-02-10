const memoize = (fn) => {
    let count = 0;
    let cache = {}; //acts like map
    return function (...args){
        const key = JSON.stringify(args); //keep tracks on cache takes      unique values only.
        if(key in cache)
            return cache[key];

        count++;
        const result = fn(...args);
        cache[key] = result;
        return result;
    };
}