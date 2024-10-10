function ifduplicate(array){
    let newarray = [];
    for(let i=0;i<array.length;i++){
        if (!newarray.includes(array[i])){
            newarray+=array[i];
        }
    }
    console.log(newarray);
}
let array = [0,1,2,4,6,5,0,5,7,9,4]
ifduplicate(array);