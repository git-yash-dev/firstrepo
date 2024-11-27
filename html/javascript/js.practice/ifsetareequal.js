function aresetequal(set1,set2){
    if (set1.size==set2.size){
        for (let item of set1){
            if (set2.has(item)){
                continue;
            }
            else{
                return false;
            }
        }
    }
    else{return false;}
    return true;
}
const set1= new Set([1,2,4,5]);
const set2= new Set([1,2,8,5]);
console.log(aresetequal(set1,set2));