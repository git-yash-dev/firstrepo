function findindex(arr,value){
    val=arr.indexOf(value);
    return val;
}
function accending(arr){
    let aar=[];
    while(arr.length>0){
        let smallest=arr[0];
        for(let i=0;i<arr.length;i++){
            if (smallest>arr[i]){
                smallest=arr[i];
            }
        }
        aar.push(smallest);
        arr.splice(findindex(async (s) => {
            
        },smallest),1);
    }
    console.log(aar);
}
let arr=[1,5,7,6,4,2,8,155,17];
accending(arr);
