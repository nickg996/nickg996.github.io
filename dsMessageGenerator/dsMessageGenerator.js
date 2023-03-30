// Program that creates a Dark Souls style message by randomizing different phrases into a readable format

// Function that returns the first part of the message from an array of possible phrases 

const messagePart1 = () => {
    const phrasePool = ['no', 'ahead', 'required ahead', 'be wary of', 'try', 'likely', 'first off,', 'seek', 'still no', 'why is it always', 'if only i had a', "didn't expect", 
    'visions of', 'could this be a', 'time for', 'behold', 'offer', 'praise the', 'let there be', 'ahh,'];
    let randomIndex = Math.floor(Math.random() * phrasePool.length);
    let randomPhrase = phrasePool[randomIndex];
    return randomPhrase;
}

// Function that returns the second part of the message from an array of possible phrases
const messagePart2 = () => {
    const phrasePool = ['enemy', 'weak foe', 'strong foe', 'pack', 'decoy', 'undead', 'mage', 'ordnance', 'monarch', 'dog', 'wolf', 'rat', 'prawn', 'octopus', 'bug', 'item', 'something incredible', 'armament', 
    'map', 'mushroom', 'butterfly', 'elden ring', 'taking on all at once', 'jumping off', 'brief respite', 'attacking', 'rolling', 'dead end', 'head', 'rump', 'fingers', 'turn back', 
    "you don't have the right", 'pickle'];
    let randomIndex = Math.floor(Math.random() * phrasePool.length);
    let randomPhrase = phrasePool[randomIndex];
    return randomPhrase;
}

// Function that assembles messagePart1() and messagePart2() into a readable phrase
const fullMessage = () => {
    let firstMsg = messagePart1();
    let secondMsg = messagePart2();

    switch(firstMsg) {
        case 'ahead':
        case 'required ahead':
            return secondMsg + ' ' + firstMsg;
            break;
        case 'no':
            return firstMsg + ' ' + secondMsg + ' ahead';
            break;
        default:
            return firstMsg + ' ' + secondMsg;
            break;
    }
}

console.log(fullMessage());


