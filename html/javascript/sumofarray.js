function sumofarray(array){
    let sumof_numb=0;
    for (let i=0;i<array.length;i++){
        sumof_numb+=array[i];
    }
    return sumof_numb;
}
let numbers =[1,2,3,4];
console.log(sumofarray(numbers));