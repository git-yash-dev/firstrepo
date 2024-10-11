function merge(arr1,arr2){
    let common=[];
    let q1=0;
    let q2=0;
    for (let i=q1;i<arr1.length;i++){
        for (let f=q2;f<arr2.length;f++){
            if (arr1[i]==arr2[f]){
                common.push(arr2[f]);
                q1=i+1;
                q2=f+1;
                break;
            }
        }
    }
    return common;
}
let arr1=[2,4,6,7,9];
let arr2=[1,2,5,7,9,11];
console.log(merge(arr1,arr2));