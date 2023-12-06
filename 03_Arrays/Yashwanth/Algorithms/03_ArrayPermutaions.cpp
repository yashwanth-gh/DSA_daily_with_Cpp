void helper(int l, int h, vector<int> &v, vector<vector<int>> &permutations)
{
    if (l == h)
    {
        permutations.push_back(v);
        return;
    }
    for (int i = l; i <= h; i++)
    {
        swap(v[l], v[i]);
        helper(l + 1, h, v, permutations);
        swap(v[l], v[i]);
    }
}
vector<vector<int>> generatePerm(int n, vector<int> &v)
{
    vector<vector<int>> permutations;
    helper(0, n - 1, v, permutations);
    return permutations;
}
int main()
{
    local();
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int>> sol = generatePerm(n, v);

    for (auto ele : sol)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ele[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
