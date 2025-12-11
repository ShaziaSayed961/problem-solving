function saveThePrisoner(n, m, s) {
    //console.log("-----------------------")
 sum=s-1+m 
 if(sum%n!==0){
    return sum%n
 }
 return n 
}
console.log(saveThePrisoner(5,2,1))//2
console.log(saveThePrisoner(5,2,2))//3
console.log(saveThePrisoner(7,19,2))//6
console.log(saveThePrisoner(3,7,3))//3