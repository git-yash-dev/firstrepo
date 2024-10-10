function findmissing(arr){
    let count=arr.length;
    let lnth=arr[count-1];
    let lst=[];
    let missing=[];
    for (let i=1;i<=lnth;i++){
        lst.push(i);
    }
    for (let i=0;i<lst.length;i++){
        if(!arr.includes(lst[i])){
            missing.push(lst[i]);
        }
    }
    return missing;
}
let arr=[2,4,5,6,7,8,9];
console.log(findmissing(arr));