console.log('do i need npm?');

let string = 'abcde';
let stringArray = Array.from(string);
console.log(string[8]);

console.log(string.charCodeAt(1)); // This should give the ascii code for letter b.

stringArray.forEach(character => {
  let alphaIndex = character.charCodeAt(0);
});

// No I don't. I can still run node because it's on my local computer. The only reason to do npm init is for packages and to start a node server.

// This LeetCode folder is the intention of adding all the coding I do on leetcode to store as solutions. Mainly so that I can look back and reason through the logic.