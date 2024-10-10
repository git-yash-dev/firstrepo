//look for nice code in dropdesk where improved version exist
function seclargest(arr){
    let large=0;
    let seclarge=0;
    let ind=0;
    let check=[arr[0]];
    let mess="there is no second largest number as all number are same";
    for (let i=0;i<arr.length;i++){
        if (!check.includes(arr[i])){continue;}
        else{return mess;}
    }
    for (let i=0;i<arr.length;i++){
        if (large<arr[i]){
            large=arr[i];
            ind=i;
        }
    }
    arr.splice(ind,1);
    for(let i=0;i<arr.length;i++){
        if (seclarge<arr[i]){
            seclarge=arr[i];
        }
    }
    return seclarge;
}
let arr=[1,1,1,1,1,1,1];
console.log(seclargest(arr));
