function reversearray(array){
    let r_array=[];
    for(let i=array.length-1;i>=0;i--){
        r_array.push(array[i])
    }
    return r_array;
}
let numbers = [1,2,3,4,5];
console.log(reversearray(numbers));