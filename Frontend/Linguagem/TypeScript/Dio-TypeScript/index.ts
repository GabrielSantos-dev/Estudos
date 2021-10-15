const input = document.getElementById('input') as HTMLInputElement;

input.addEventListener('input', (event) => {
    cont i = event.currentTarget as HTMLInputElement;
    console.log(i.value);
    
});