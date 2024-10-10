function longestword(str){
    let list = str.split(" ");
    let long=0;
    for (let i=0;i<list.length;i++){
        let check =list[i].split("");
        let count =check.length;
        if (long<count){
            long=count;
        }
    }
    return long;
}
let str="this is a chair";
console.log(longestword(str));