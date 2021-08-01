let randomiseColor = () => {
    let color = ref("#");
    let possiblechars = "0123456789ABCDEF";

    /* append 6 randomly selected possible chars to color */
    for (i in 0 to 5){
        print_int(i);
        /* randomly select index from 0-15 */
        let select_char = possiblechars.[Random.int(16)];
        let select_str = String.make(1, select_char);
        color := color^ ++ select_str;
    };
    color^;
};

type state = {
    color: string,
};

type action =
  | Randomise;

let initialState = {color: randomiseColor()};

let reducer = (state, action) =>
    switch (action){
    | Randomise => {state, color: randomiseColor()}
    };

[@react.component]
let make = () => {
    let (state, dispatch) = React.useReducer(reducer, initialState);

    <div>
        <Square color= state.color />
        {React.string(state.color)}
        <button onClick={_ => dispatch(Randomise)}>{React.string("Randomise")}</button>
    </div>;

};