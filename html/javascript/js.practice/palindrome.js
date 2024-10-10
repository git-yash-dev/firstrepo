function findfrequent(arr){
    let mostfreq=0;
    for (let i=0;i<arr.length;i++){
        let flag =-0;
        for (let f=0;f<arr.length;f++){
            if (arr[i]==arr[f]){
                flag+=1;
            }
        }
        if (mostfreq<flag){mostfreq=flag;}
    }
    return mostfreq;
}
let arr=[1,1,5,4,2,3,6,8,9,5,1,1,1]
console.log(findfrequent(arr));