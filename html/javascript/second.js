function largest(numbers){
    let large=0;
    for(let i=0;numbers.length;i++){
        if (numbers[i]>large){
            large=numbers[i];
        }
    }
    return large;
}
let numbers=[5,100,12,17,7];
console.log(largest(numbers));
