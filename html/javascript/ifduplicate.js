function isduplicate(array){
    let duplicate=false;
    let copy =[];
    for(let i=0;i<array.length;i++){
        if(copy.includes(array[i])){
            duplicate=true;
            break;
        }
        else{copy.push(array[i]);}
    }
    return duplicate;
}
let array=[1,2,4,3,4,5,6];
console.log(isduplicate(array));