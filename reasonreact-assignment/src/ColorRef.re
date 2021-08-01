open UtilColor;

[@react.component]
let make = () => {
    let hexColor = React.useRef(Color.initialiseColor());
    let (pressed, isPressed) = React.useState(_ => false);

    let buttonPress = (pressed) => {
        let pressed = !pressed;
        pressed;
    };

    React.useEffect1(
        () => {
            hexColor.current = Color.initialiseColor();
          None
        },
        [|pressed|],
    );

    <div style=(ReactDOM.Style.make(~display="flex", ~justifyContent="center", ~alignItems="center", ~margin="16px 0px", ()))>
        <div style=(ReactDOM.Style.make(~display="flex", ~flexDirection="column", ~alignItems="center", ()))>
            <div style=(ReactDOM.Style.make(~backgroundColor=hexColor.current, ~height="80px", ~width="80px", ~marginBottom="5px", ()))/>
            <div>{React.string({hexColor.current})}</div>
        </div>
        <RandomButton onClick={_ => isPressed(pressed => buttonPress(pressed))} />
    </div>;
}
