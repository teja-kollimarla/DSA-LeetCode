/**
 * @param {string} num
 * @return {boolean}
 */
var digitCount = function(num) {
    let m = {};
    for(let i = 0 ; i < num.length ; i++) {
        m[num[i]] = (m[num[i]] || 0) + 1; 
    }
    console.log(m)
    for(let i = 0; i < num.length; i++) {
        if(Number(num[i]) !== (m[i] || 0)) {
            // console.log({i , curr: num[i]})
            return false;
        }
    }
    return true;
};