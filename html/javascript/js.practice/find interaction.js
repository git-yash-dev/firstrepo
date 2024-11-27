function findinteraction(set1,set2){
    const intrset= new Set();
    for (let item of set1){
        if(!set2.has(item)){
            continue;
        }
        else{intrset.add(item);}
    }
    for (let item of intrset){
        console.log(item);
    }
}
const set1= new Set([1,2,3,4,5]);
const set2 = new Set([8,7,6,5,4,3]);
console.log(findinteraction(set1,set2));