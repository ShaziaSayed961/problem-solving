
function matchingStrings(stringList, queries) {
    // Write your code here
    let counterArray=[]
    for(let i=0;i<queries.length;i++){
        let counter=0
        for(let j=0;j<stringList.length;j++){
       if(stringList[j]===queries[i]){
        counter++
      }
        }
        counterArray.push(counter)
    }
    return counterArray
}
console.log(matchingStrings(["aba","baba","aba","xzxb"], ["aba","xzxb","ab"]))