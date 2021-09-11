export interface Deck{
    sucess: boolean;
    deck_id: string;
    shuffled: boolean;
    remaining: number;

}
export interface Draw{
    sucess: boolean;
    deck_id: string;
    cards: Card[];
}
export interface Card{
    code: string;
    image: string;
    images: {
        svg: string;
        png: string;
    };
    value: string;
    suit: string;
}