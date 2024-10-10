function product_numbers_exceptone(array){
    let new_array=[];
    for(let i=0;i<array.length;i++){
        let num=1;
        for(let f=0;f<array.length;f++){
            if (i==f){continue;}
            else{num=num*array[f];}
        }
        new_array.push(num);
    }
    return new_array;
}
let numbers = [1,2,3,4];
console.log(product_numbers_exceptone(numbers));