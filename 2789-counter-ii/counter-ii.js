const createCounter = (init) => {
    const res = init;
    return{
        increment: () => ++init,

        decrement: () => --init,

        reset: () => init = res
    }
};