//this does not work chexk for mistake when wi-fi is available 

function cpaitalizeword(sentence){
    let wlist=sentence.split(" ");
    let newsentence="";
    for (let i=0;i<wlist.length;i++){
        let word=wlist[i];
        for(let f=0;f<word.length;f++){
            let letter=word[f];
            if (f==0){
                letter.toUpperCase();
            }
        }
        newsentence.push(word);
    }
    console.log(newsentence);
}
let sentence = "okay this is a sentence to capitalize only first letter of a word ";
cpaitalizeword(sentence);