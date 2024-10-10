function findlongest(sentence){
    let wlist=sentence.split(" ");
    let longest =0;
    let long_word = "";
    for (let i=0;i<wlist.length;i++){
        if (longest<wlist[i].length){
            longest = wlist[i].length;
            long_word = wlist[i];
        }
    }
    console.log(longest);
    console.log(long_word)
}
let word="the quick brown fox jumps over the lazy dog thisislong";
findlongest(word);