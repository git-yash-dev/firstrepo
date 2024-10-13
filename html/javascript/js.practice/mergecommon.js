function merge(arr1,arr2){
    let common=[];
    let q1=0;
    let q2=0;
    for (let i=q1;i<arr1.length;i++){
        for (let f=q2;f<arr2.length;f++){
            if (arr1[i]===arr2[f]){
                common.push(arr2[f]);
                q1=i+1;
                q2=f+1;
                break;
            }
        }
    }
    return common;
}
let arr1 = Array.from({ length: 10000 }, (_, i) => i * 2); // Even numbers from 0 to 19998
let arr2 = Array.from({ length: 10000 }, (_, i) => i * 3); // Multiples of 3 from 0 to 29997
console.log(merge(arr1,arr2));