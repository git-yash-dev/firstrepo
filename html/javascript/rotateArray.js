function rotateArray(arr,k){
    let new_array=[];
    for(let i=k+1;i<arr.length;i++){
        new_array.push(arr[i]);
    }
    for (let i=0;i<k+1;i++){
        new_array.push(arr[i]);
    }
    return new_array;
}
let array = [1,2,3,4,5];
let k =2;
console.log(rotateArray(array,k));