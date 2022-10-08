/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    const letters = new Map();
    const letters2 = new Map();
    for (var i=0; i<s.length; ++i){
        console.log(letters.get(s[i]) + "   " + "compared to " + t[i])
        if (letters.get(s[i]) === undefined && letters2.get(t[i]) === undefined){
            letters.set(s[i], t[i]);
            letters2.set(t[i], s[i]);
        } else if (letters.get(s[i]) !== t[i] || letters2.get(t[i]) !== s[i]){
            return false;
        }
    }
    return true;
};