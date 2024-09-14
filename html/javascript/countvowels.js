function countvowels(str){
    let string = str.toLowerCase();
    let vowels="aeiou";
    let novowel=0;
    for(let i=0;i<string.length;i++){
        if (vowels.includes(string[i])){
            novowel++;
        }
    }
    return novowel;
}
let string = "okay my name is yash";
console.log(countvowels(string));