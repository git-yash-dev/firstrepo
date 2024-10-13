function seclaruni (arr){
    let unique=[];
    let large=-Infinity;
    let seclarge=-Infinity;
    sec
    for (let i=0;i<arr.length;i++){
        if (!unique.includes(arr[i])){
            unique.push(arr[i]);
        }
    }
    for (let i=0;i<unique.length;i++){
        if (large<unique[i]){
            seclarge=large;            
            large=unique[i];
        }
    }
    return seclarge;
}
let arr=[1,3,4,5,6,999,3,5,65,6,4,2,3,4,5,5,1,2,2,22,2,2,2,2,2,22,999];
console.log(seclaruni(arr));