function countoccurences(array,number){
    let count_numb=0;
    for(let i=0;i<array.length;i++){
        if (array[i]==number){
            count_numb++;
        }
    }
    return count_numb;
}
let numbers =[1,2,3,4,2,2,5];
console.log(countoccurences(numbers,2));