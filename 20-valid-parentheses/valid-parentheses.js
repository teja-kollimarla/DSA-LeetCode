/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let brackets={
        ')':'(',
        '}':'{',
        ']':'['
    }
    let stack =[]
    
    for(let char of s){
        if(char in brackets){
            const top=stack.pop();
            // console.log(top)
            if(top!==brackets[char] ){
                return false;
            }
        }
        else{
            stack.push(char)
        }
    }
    return stack.length===0;
};