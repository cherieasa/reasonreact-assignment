type colorsquare = {
    id: int,
    color: string,
};

type state = {colorsquares: array(colorsquare)};

let initialiseColor = () => {
    let color = ref("#");
    let possiblechars = "0123456789ABCDEF";
    let modify = possiblechars.split

    /* append 6 randomly selected possible chars to color */
    for (i in 0 to 5){
        print_int(i);
        /* randomly select index from 0-15 */
        let select_char = possiblechars.[Random.int(16)];
        let select_str = String.make(1, select_char);
        color := color^ ++ select_str;
    };
    Js.log(color^);
    color^;
};


[@react.component]
let make = () => {
    let hexColor = React.useRef(initialiseColor());
    let (pressed, isPressed) = React.useState(_ => false);

    let buttonPress = (pressed) => {
        let pressed = !pressed;
        pressed;
    };

    React.useEffect1(
        () => {
            hexColor.current = initialiseColor();
          None
        },
        [|pressed|],
    );

    <div>
        <div style=(ReactDOM.Style.make(~backgroundColor=hexColor.current, ~height="80px", ~width="80px", ~marginBottom="5px", ()))/>
        <div>{React.string({hexColor.current})}</div>
        <button onClick={_ => isPressed(pressed => buttonPress(pressed))}>{React.string("Randomise")}</button>
        /* <button onClick={_ => hexColor.current = initialiseColor()}>{React.string("Randomise")}</button> */
    </div>;
}
