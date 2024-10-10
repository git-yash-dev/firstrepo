function secondlargest(list){
    let longest=0;
    let sec_longest=0;
    for (let i=0;i<list.length;i++){
        if(longest<list[i]){
            sec_longest=longest;
            longest=list[i];
        }
    }
        for(let i=0;i<list.length;i++){
        if (longest>list[i]){
            if(list[i]>sec_longest){
                sec_longest=list[i];
            }
        }
    }
    return sec_longest;
}
let numbers=[3,5,7,2,8,6]
console.log(secondlargest(numbers))