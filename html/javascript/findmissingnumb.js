function findMissingnumber(arr,n){
    let comp_array=[];
    let missing =[];
    for(let i=1;i<n+1;i++){
        comp_array.push(i)
    }
    for (let i=0;i<comp_array.length;i++){
        if (arr.includes(comp_array[i])){
            continue;
        }
        else{missing.push(comp_array[i]);}
    }
    return missing;
}
let array = [1,2,4,5,6];
let n=6;
console.log(findMissingnumber(array,n));