function reverse(arr){
    let list = arr.split(" ");
    let newstr="";
    for (let i=0;i<list.length;i++){
        let lis=list[i].split("");
        for (let f=lis.length-1;f>=0;f--){
            newstr+=lis[f]
        }
        newstr+=" ";
    }
    return newstr;
}
let str="this my bouy badashah";
console.log(reverse(str));