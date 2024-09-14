function sumofsquares(number){
    let square=0;
    for (let i=0;i<number.length;i++){
        let num=number[i]*number[i];
        square+=num;
    }
    return square;
}
let number=[1,2,3,4];
console.log(sumofsquares(number));