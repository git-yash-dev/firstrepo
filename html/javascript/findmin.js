function findmin(array){
    let min=array[0];
    for (let i=1;i<array.length;i++){
        if (min>array[i]){
            min=array[i];
        }
    }
    return min;
}
let numbers=[5,3,8,1,4];
console.log(findmin(numbers));