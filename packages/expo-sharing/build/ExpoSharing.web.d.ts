declare type ShareOptions = {
    title?: string;
    text?: string;
    url?: string;
};
declare const _default: {
    readonly name: string;
    isAvailableAsync(): Promise<boolean>;
    shareAsync(url: string, options?: ShareOptions): Promise<object>;
};
export default _default;
