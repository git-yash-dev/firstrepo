function binon2d(arr,target){
    let rows=arr.length;
    let columns=arr[0].length;
    let left=0;
    let right=rows*columns-1;
    while(left<=right){
        let mid =Math.floor((left+right)/2);
        let row=Math.floor(mid/columns);
        let column= mid %columns;
        if (arr[row][column]===target){
            return true;
        }
        else if (arr[row][column]<target){
            left=mid+1;
        }
        else{right=mid-1;}
    }
    return false;
}
let dmat=[[1,2,3],[4,7,9],[11,15,16]];
console.log(binon2d(dmat,15));