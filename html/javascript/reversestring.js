function reversestring(string){
    let reverse="";
    for (let i=string.length-1;i!=-1;i--){
        reverse+=string[i];
    }
    return reverse
}
console.log(reversestring("hello"));
