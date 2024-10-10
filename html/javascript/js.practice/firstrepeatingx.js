function first(str){
    let list =str.split("");
    let store=[list[0]];
    for (let i=0;i<list.length;i++){
        if (!store.includes(list[i])){
            return list[i];
        }
        else{store.push(list[i]);}
    }
}
let str="ookay this is a text";
console.log(first(str));