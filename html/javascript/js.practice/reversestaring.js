function reversestring(str){
    let list=str.split("");
    let newstring="";
    for(let i=list.length-1;i+1>0;i--){
        newstring+=list[i];
    }
    return newstring;
}
let str="hello";
console.log(reversestring(str));
