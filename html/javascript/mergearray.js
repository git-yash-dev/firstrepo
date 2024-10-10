function mergearray(array1,array2){
    let merged_array=[];
    for(let i=0;i<array1.length;i++){
        if (merged_array.includes(array1[i])){
            continue;
        }
        else{merged_array.push(array1[i]);}
    }
    for(let i=0;i<array2.length;i++){
        if (merged_array.includes(array2[i])){
            continue;
        }
        else{merged_array.push(array2[i])}
    }
    return merged_array;
}
let arr1=[1,2,3,4];
let arr2=[3,4,5,6];
console.log(mergearray(arr1,arr2));