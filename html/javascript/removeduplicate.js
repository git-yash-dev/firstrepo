function removeDuplicates(array){
    let newarr=[1];
    for (let i=0;i<array.length;i++){
        if(newarr.includes(array[i])){
            continue;
        }
        else{
            newarr.push(array[i]);
        }
    }
    return newarr;

}
let numbers = [1,2,3,2,4,5,1];
console.log(removeDuplicates(numbers))