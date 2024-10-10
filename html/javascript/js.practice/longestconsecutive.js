function longestconsecutive(arr){
    let streak=0;
    let rep=0;
    for (let i=0;i<arr.length;i++){
        let count=0;
        for (let f=i+1;f<arr.length;f++){
            if (arr[i]==arr[f]){
                count++;
            }
            else{break;} 
        }
        if (streak<count+1){
            streak=count+1;
            rep=arr[i];
        }
    }
console.log("The  longest consecutive sequence is:"+rep+" repeated "+streak+" times.")
}
let arr=[1,2,4,5,6,7,8,5,5,5,5,5,5,4,3,2,5,6,5,5,5];
longestconsecutive(arr);