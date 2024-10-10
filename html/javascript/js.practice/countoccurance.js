function countoccurance(arr,number){
    let flag=0
    for(let i=0;i<arr.length;i++){
        if(arr[i]==number){
            flag+=1;
        }
    }
    return flag;
}
let arr=[1,5,4,2,2,8,39,5,2,47,2]
console.log(countoccurance(arr,2))