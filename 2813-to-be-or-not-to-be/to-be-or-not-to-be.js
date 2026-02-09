const expect = (val) => {
    return {
    toBe(val1){
        if(val === val1)
        return true;
        throw new Error("Not Equal");

    },

    notToBe(val1){
        if(val !== val1)
        return true;
        throw new Error("Equal");
    }
    
    }

}