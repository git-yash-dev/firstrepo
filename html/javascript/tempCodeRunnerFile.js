function intersectionofarray(arr1,arr2){
    let unique_arr=[];
    let max_index=0;
    if (arr1.length>arr2.length){
        max_index=arr1.length;
    }
    else{max_index=arr2.length;}
    for(let i=0;i<max_index;i++){
        if (arr1.length>arr2.length){
            if (arr2.includes(arr1[i])){
                unique_arr.push(arr2[i]);
            }
            else{continue;}
        }
        else if(arr1.length<arr2.length){
            if (arr1.includes(arr2[i])){
                unique_arr.push(arr2[i]);
            }
        }
    }
    return unique_arr;
}
let arr1=[3,6,8,9,11,13];
let arr2=[8,13,15,6];
console.log(intersectionofarray(arr1,arr2))